//
//  GameOver.h
//  GameTest
//
//  Created by yang mu on 12-4-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "cocos2d.h"

@interface GameMain : CCLayerColor {
    // 背景精灵
    CCSprite *backgroundSprite;
}

+(CCScene *) scene;

// 初始化背景
-(void)initBackground;
// 初始化音效
-(void)initSound;
// 初始化菜单
-(void)initMenu;

@end
