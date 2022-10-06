#pragma once

#include "Model.h"
#include "WorldTransform.h"
#include "Input.h"
#include "DebugText.h"
#include "matWorld.h"
#include <assert.h>
#include<memory>
#include<list>

class Player
{
public:
	///<summary>
	///初期化
	/// </summary>
	/// <pragma name="model">モデル</param>
	/// <pragma name="textureHandle">テクスチャハンドル</param>
	void Initialize(Model* model, uint32_t textureHandle);

	///<summary>
	///更新
	/// </summary>
	void Update(MatWorld* matworld);

	/// <summary>
	/// 描画
	/// </summary>
	/// <param name="">ビュープロジェクション</param>
	void Draw(ViewProjection& viewprjection);

	/// <summary>
	/// 攻撃
	/// </summary>
	void Attack();

private:
	// ワールド変換データ
	WorldTransform worldTransform_;
	// モデル
	Model* model_ = nullptr;
	// テクスチャハンドル
	uint32_t textureHandle_ = 0u;
	// 入力処理するため
	Input* input_ = nullptr;
	// デバッグテキスト
	DebugText* debugText_ = nullptr;
	
};