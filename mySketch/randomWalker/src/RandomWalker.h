//
//  RandomWalker.h
//  RandomWalker
//
//  Created by 岩瀬 さくら on 2015/04/28.
//
//

#pragma once //一回だけ読めばいいですよ、とパソコンに進言している
#include "ofMain.h" //　この一文でofに設定されている内容を読み込んでいる　大量に

class RandomWalker {
public:
    RandomWalker();
    void update();
    void draw();
    
ofVec2f position;
    
    //外部から操作できる
    
};