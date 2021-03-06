//
//  XHLoginViewController4.h
//  XHLogin
//
//  Created by 曾 宪华 on 13-12-12.
//  Copyright (c) 2013年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XHBaseLoginViewController.h"

@interface XHLoginViewController4 : XHBaseLoginViewController

@property (nonatomic, strong) UITextField * usernameField;

@property (nonatomic, strong) UITextField * passwordField;

@property (nonatomic, strong) UIButton *loginButton;

@property (nonatomic, strong) UIButton * forgotButton;

@property (nonatomic, strong) UILabel * titleLabel;

@property (nonatomic, strong) UIImageView * headerImageView;

@property (nonatomic, strong) UIView * infoView;

@property (nonatomic, strong) UILabel * infoLabel;

@property (nonatomic, strong) UIView * overlayView;
@end
