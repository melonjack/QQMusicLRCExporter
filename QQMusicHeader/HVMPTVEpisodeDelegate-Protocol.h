//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HVMPInfoButton, NSString;

@protocol HVMPTVEpisodeDelegate <NSObject>
- (BOOL)isVideoDownloadedAtSubIndex:(int)arg1 subName:(NSString *)arg2;
- (BOOL)episodeNetworkAvaiable;
- (void)episodeButtonSelected:(HVMPInfoButton *)arg1;
@end

