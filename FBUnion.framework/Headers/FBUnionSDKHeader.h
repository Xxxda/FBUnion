//
//  FBUnionSDKHeader.h
//  FBUnionSDK
//
//  Created by TD on 2019/8/8.
//  Copyright © 2019 TD. All rights reserved.
//

#ifndef FBUnionSDKHeader_h
#define FBUnionSDKHeader_h

@class FBUserAcountModel;

typedef NS_ENUM(NSUInteger, FBSDKStatus)
{
    FB_FAIL = 0,
    FB_SUCCESS,
    FB_CANCEL,
    FB_UNKNOW,
};

@protocol FBUnionSDKDelegate <NSObject>

@optional
-(void)accountLogin:(FBUserAcountModel*)model;
-(void)accountRegist:(FBUserAcountModel*)model;
-(void)accountLogout;


@end
#endif /* FBUnionSDKHeader_h */
