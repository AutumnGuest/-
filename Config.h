//
//  Config.h
//  代码块和配置
//
//  Created by 王照柯 on 2016/11/8.
//  Copyright © 2016年 王照柯. All rights reserved.
//

#ifndef Config_h
#define Config_h


#endif /* Config_h */

#pragma mark ---主要配置 窗口/颜色/
/*主屏幕尺寸*/
#define SLQKMainBounds [UIScreen mainScreen].bounds
/*主屏幕宽度*/
#define SLQKMainWidth [UIScreen mainScreen].bounds.size.width
/*主屏幕高度*/
#define SLQKMainHeight [UIScreen mainScreen].bounds.size.height
/*随机颜色*/
#define SLQKArcColor [UIColor colorWithRed:arc4random()%256/255.0 green:arc4random()%256/255.0 blue:arc4random()%256/255.0 alpha:1]
/*直接填入0~255的随机颜色 附带设置透明度*/
#define SLQKRGBAColor(r,g,b,a) [UIColor colorWithRed:r%256/255.0 green:g%256/255.0 blue:b%256/255.0 alpha:a]
/*不带透明度的直接填值得随机色*/
#define SLQKRGBColor(r,g,b) [UIColor colorWithRed:r%256/255.0 green:g%256/255.0 blue:b%256/255.0 alpha:1]
/*主窗口*/
#define SLQKMainWindow [[[UIApplication sharedApplication]delegate] window]

/*软引用的self*/
#define SLQKWeakSelf  __weak typeof(self) weakSelf = self

/*DEBUG模式下输出*/
#ifdef DEBUG
#define SLQKLog(format, ...) CFShow((__bridge CFTypeRef)[NSString stringWithFormat:format, ## __VA_ARGS__]);

#else
#define SLQKLog(...)
#endif