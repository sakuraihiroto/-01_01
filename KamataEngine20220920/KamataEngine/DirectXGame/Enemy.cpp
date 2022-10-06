#include "Enemy.h"
#include "matWorld.h"

MatWorld* matworld = nullptr;

void Enemy::Initialize(Model* model, const Vector3& position) {
	//NULL�|�C���^�`�F�b�N
	assert(model);

	model_ = model;

	//�e�N�X�`���ǂݍ���
	textureHandle_ = TextureManager::Load("Enemy.jpg");

	//���[���h�ϊ��̏�����
	worldTransform_.Initialize();

	//�L�����N�^�[�̈ړ��x�N�g��
	Vector3 move = { 0,5,0 };

	//�������W���Z�b�g
	worldTransform_.translation_ = move;
}

void Enemy::Update()
{
	float speed = 0.3f;

	//�s��̌v�Z
	worldTransform_.matWorld_ = matworld->CreateMatWorld(worldTransform_);

	//���W���ړ�������(1�t���[�����̈ړ��ʂ𑫂�����)
	worldTransform_.translation_.y -= speed;

	//�s��̓]��
	worldTransform_.TransferMatrix();
}