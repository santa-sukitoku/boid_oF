#pragma once
#include "ofMain.h"

class bird {
public:
	bird(vector<bird>* const, const int, ofColor, vector<bird>* const, vector<bird>* const, vector<bird>* const);
	virtual ~bird();

	virtual void update();
	virtual void draw();

	int id; // 群れの中の個体の識別番号
	float head; // 個体の頭の半径
	float tail; // 個体の尾の長さ
	ofVec2f pos; // 個体の位置
	ofVec2f vel; // 個体の速度
	ofVec2f acc; // 個体の加速度
	ofColor ourColor; // 個体の色

protected:
	vector<bird>* pSelfGroup; // 自分の所属する群れ
	vector<bird>* pEnemyGroup; // 敵対する群れ
	vector<bird>* pFriendGroup; // 友好的な群れ
	vector<bird>* pFriendGroup2; // 友好的な群れ2

	ofVec2f separationVel; // 分離
	ofVec2f alignmentVel; // 整列
	ofVec2f cohesionVel; // 結合
	ofVec2f groupCenterPos; // 群れの中心位置
};