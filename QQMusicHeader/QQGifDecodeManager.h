//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface QQGifDecodeManager : NSObject
{
    NSMutableArray *_waitingList;
    long long _allBufferBytes;
    NSMutableDictionary *_gifDict;
}

+ (id)gifKeyWithURL:(id)arg1;
+ (void)removeGifBuffForUrl:(id)arg1;
+ (void)removeAll;
+ (BOOL)loadAnimationGifForView:(id)arg1 atUrl:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *gifDict; // @synthesize gifDict=_gifDict;
@property(nonatomic) long long allBufferBytes; // @synthesize allBufferBytes=_allBufferBytes;
@property(retain, nonatomic) NSMutableArray *waitingList; // @synthesize waitingList=_waitingList;
- (void)dealloc;
- (id)init;

@end

