//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QMApi : NSObject
{
}

+ (int)openQQMusicApp;
+ (id)getQQMusicInstallURL;
+ (id)getQQMusicApiVer;
+ (BOOL)isQQMusicSupportApi;
+ (BOOL)isQQMusicInstalled;
+ (id)handleOpenURL:(id)arg1;
+ (id)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
+ (int)sendMessageToQQMusic:(id)arg1;
+ (id)getSDKCachePath;
+ (void)setSDKPath:(id)arg1;
+ (void)openLog:(BOOL)arg1;
+ (void)initWithAppid:(id)arg1 appkey:(id)arg2;
+ (id)instance;

@end

