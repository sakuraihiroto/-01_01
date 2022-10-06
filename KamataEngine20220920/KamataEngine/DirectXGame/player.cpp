#include "Player.h"

// アフィン行列呼び出し
MatWorld* playerMatworld = nullptr;

//初期化処理
void Player::Initialize(Model* model, uint32_t textureHandle)
{
	// NULLポインタチェック
	assert(model);

	// 引数として受け取ったデータをメンバ変数に記録する
	model_ = model;
	textureHandle_ = textureHandle;

	// シングルトンインスタンスを取得する
	input_ = Input::GetInstance();
	debugText_ = DebugText::GetInstance();

	// ワールド変換の初期化
	worldTransform_.Initialize();
}

//プレイヤーの攻撃処理
void Player::Attack()
{

}

//アップデート
void Player::Update(MatWorld* matworld)
{

}

//描画処理
void Player::Draw(ViewProjection& viewProjection)
{

}
