#include "Enemy.h"
#include "matWorld.h"

MatWorld* matworld = nullptr;

void Enemy::Initialize(Model* model, const Vector3& position) {
	//NULLポインタチェック
	assert(model);

	model_ = model;

	//テクスチャ読み込み
	textureHandle_ = TextureManager::Load("Enemy.jpg");

	//ワールド変換の初期化
	worldTransform_.Initialize();

	//キャラクターの移動ベクトル
	Vector3 move = { 0,5,0 };

	//初期座標をセット
	worldTransform_.translation_ = move;
}

void Enemy::Update()
{
	float speed = 0.3f;

	//行列の計算
	worldTransform_.matWorld_ = matworld->CreateMatWorld(worldTransform_);

	//座標を移動させる(1フレーム分の移動量を足しこむ)
	worldTransform_.translation_.y -= speed;

	//行列の転送
	worldTransform_.TransferMatrix();
}