//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ListBase, NSArray, NSString, TodayKey;

__attribute__((visibility("hidden")))
@interface FetchTodaykeyResult : NSObject
{
    BOOL _continueWorking;
    ListBase *_listBase;
    NSString *_err;
    TodayKey *_todaykey;
    CDUnknownBlockType _finishBlock;
    NSArray *_recentListenTids;
    long long _backupSongListId;
}

@property(retain) NSArray *recentListenTids; // @synthesize recentListenTids=_recentListenTids;
@property long long backupSongListId; // @synthesize backupSongListId=_backupSongListId;
@property BOOL continueWorking; // @synthesize continueWorking=_continueWorking;
@property(copy) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain) TodayKey *todaykey; // @synthesize todaykey=_todaykey;
@property(copy) NSString *err; // @synthesize err=_err;
@property(retain) ListBase *listBase; // @synthesize listBase=_listBase;
- (void).cxx_destruct;

@end

