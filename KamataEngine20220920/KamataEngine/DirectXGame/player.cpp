#include "Player.h"

// �A�t�B���s��Ăяo��
MatWorld* playerMatworld = nullptr;

//����������
void Player::Initialize(Model* model, uint32_t textureHandle)
{
	// NULL�|�C���^�`�F�b�N
	assert(model);

	// �����Ƃ��Ď󂯎�����f�[�^�������o�ϐ��ɋL�^����
	model_ = model;
	textureHandle_ = textureHandle;

	// �V���O���g���C���X�^���X���擾����
	input_ = Input::GetInstance();
	debugText_ = DebugText::GetInstance();

	// ���[���h�ϊ��̏�����
	worldTransform_.Initialize();
}

//�v���C���[�̍U������
void Player::Attack()
{

}

//�A�b�v�f�[�g
void Player::Update(MatWorld* matworld)
{

}

//�`�揈��
void Player::Draw(ViewProjection& viewProjection)
{

}
