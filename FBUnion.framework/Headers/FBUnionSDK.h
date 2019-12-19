//
//  FBUnionSDK.h
//  FBUnionSDK
//
//  Created by TD on 2019/8/8.
//  Copyright © 2019 TD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FBUnionSDKHeader.h"
#import "FBUserAcountModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface FBUnionSDK : NSObject

/**
 * SDK的初始化接口
 * @param appId 应用AppID 必填

 * @param channelId 渠道Id
 *
 **/
+(void)initWithAppId:(NSString*)appId channelId:(NSString*)channelId ;



/**
 * SDK的回调事件设置接口
 * @param delegate 回调事件的观察者，建议使用全局变量作为参数
 *
 **/
+(void)setDelegate:(id<FBUnionSDKDelegate>)delegate;



/**
 * 不定金额的支付接口
 * @param orderId 订单ID
 * @param productName 商品名称
 * @param userId 当前支付玩家的账号ID
 * @param productNo 支付的商品在后台对应的ID，请确保传入值的正确性
 * @param amount 本次支付的总金额，单位为分
 * @param callback 支付成功后，后台透传给应用服务器的参数
 **/
+(void)payWithOrderID:(NSString*)orderId productName:(NSString*)productName userId:(NSString*)userId
 productNo:(NSString*)productNo amount:(NSUInteger)amount callback:(NSString*)callback;




/**
 如果用户未登录显示登录界面，如果已登录显示开始游戏欢迎界面，游戏启动时调用
 */
+(void)showWindow;


/**
 接口用于将FB账户体系与接入商自己的账号体系关联起来，将FB账户ID与用户账户ID关联到一起（非必须实现）

 @param userId 商户方userid
 */
+(void)bindGameUserId:(NSString*)userId;

/**
 退出登录时调用此接口，会调出登录界面
 */
+(void)logout;


/**
 当前登录用户

 @return 当前用户实体
 */
+(FBUserAcountModel*)currentAccount;


/**
 显示悬浮球，默认登录后显示
 */
+ (void)showSuspend;

/**
 隐藏悬浮球
 */
+ (void)dissmissSuspend;


@end

NS_ASSUME_NONNULL_END
