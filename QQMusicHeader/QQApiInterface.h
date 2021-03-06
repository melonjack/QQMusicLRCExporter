//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QQApiInterface : NSObject
{
}

+ (id)getQQInstallUrl;
+ (BOOL)openQQ;
+ (BOOL)isQQSupportApi;
+ (void)getQQUinOnlineStatues:(id)arg1 delegate:(id)arg2;
+ (BOOL)isQQInstalled;
+ (int)sendResp:(id)arg1;
+ (int)sendShowMessageFromQQResp:(id)arg1;
+ (int)sendGetMessageFromQQResp:(id)arg1;
+ (int)SendReqToQZone:(id)arg1;
+ (int)sendReq:(id)arg1;
+ (int)sendMessageToQQQZoneWithReq:(id)arg1;
+ (int)sendMessageToQQWithReq:(id)arg1;
+ (BOOL)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (BOOL)responseToSendMessageToQQ:(id)arg1 delegate:(id)arg2;
+ (int)responseToShowMessageFromQQ:(id)arg1;
+ (int)responseToGetMessageFromQQ:(id)arg1;
+ (int)SendMessageToQQRequest:(id)arg1;
+ (void)getMessageRequestFromQQ:(id)arg1;
+ (void)showMessageRequestFromQQ:(id)arg1 delegate:(id)arg2;

@end

