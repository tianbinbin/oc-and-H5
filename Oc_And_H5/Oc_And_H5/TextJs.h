//
//  TextJs.h
//  OC_And_H5
//
//  Created by 田彬彬 on 2017/4/24.
//  Copyright © 2017年 田彬彬. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>

//  第二种通过  js 通过对象调用oc 的方法   首先创建一个实现了JSExport协议的协议  凡事添加了JSExport协议的协议，所规定的方法，变量等 就会对js开放，我们可以通过js调用到

@protocol TestJSObjectProtocol <JSExport>

//此处我们测试几种参数的情况
-(void)TestNOParameter;
-(void)TestOneParameter:(NSString *)message;
-(void)TestTowParameter:(NSString *)message1 SecondParameter:(NSString *)message2;

@end


@interface TextJs : NSObject<TestJSObjectProtocol>


@end
