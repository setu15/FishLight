﻿#ifndef TUTORIALANIMATION_H
#define TUTORIALANIMATION_H

#include "cocos2d.h"
USING_NS_CC;

namespace Scenes{

/*---------------------------------------------------
	 class
	 チュートリアルのアニメーション作成クラス
	 ファイル名	 TutorialAnimation.h
	 作成者　	　小林　大峰
---------------------------------------------------*/
	class TutorialAnimation
	{
	public:
		/*-------------------------------
			コンストラクタ
		-------------------------------*/
		TutorialAnimation();
		/*-------------------------------
			デストラクタ
		-------------------------------*/
		~TutorialAnimation();

		/*------------------------------------------
			アニメーション作成
			・各関数に引数でもらった親スプライトに
			　それぞれの画像を追加していきます
			Sprite*　parent 親スプライト
		-------------------------------------------*/
		void createAnimation(Sprite* parent);


	private:
		/*------------------------------------------
			矢印の作成 
			・引数のスプライトに追加します
			Sprite* parent	親スプライト
		-------------------------------------------*/
		void createArrow(Sprite* parent);
		
		/*------------------------------------------
			チュートリアル用の手の画像設定
			・引数のスプライトに追加します
			Sprite* parent	親スプライト
		-------------------------------------------*/
		void createHand(Sprite* parent);

		/*------------------------------------------
			チュートリアル用のプレイヤー画像の設定
			・引数のスプライトに追加します
			Sprite* parent	親スプライト
		-------------------------------------------*/
		void createFish(Sprite* parent);

	};
}
#endif