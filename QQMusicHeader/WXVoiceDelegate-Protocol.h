//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol WXVoiceDelegate <NSObject>
- (void)voiceInputDidCancel;
- (void)voiceInputWaitForResult;
- (void)voiceInputMakeError:(int)arg1;
- (void)voiceInputResultArray:(NSArray *)arg1;

@optional
- (void)voiceInputVolumn:(float)arg1;
@end
