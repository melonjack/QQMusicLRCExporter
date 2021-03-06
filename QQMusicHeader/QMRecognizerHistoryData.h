//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SongQueryCallBackDelegate.h"

@class HGPageData, NSMutableArray, NSMutableDictionary, SongInfo;

__attribute__((visibility("hidden")))
@interface QMRecognizerHistoryData : NSObject <SongQueryCallBackDelegate>
{
    id _callback;
    int _mode;
    HGPageData *_tempPageData;
    NSMutableDictionary *_curSongInfoCache;
    NSMutableArray *_pageDataArray;
    SongInfo *tempSongInfo;
}

@property(retain, nonatomic) SongInfo *tempSongInfo; // @synthesize tempSongInfo;
- (void).cxx_destruct;
- (void)songQueryCallBackWithSongArray:(id)arg1;
- (id)datetimeFromString:(id)arg1;
- (id)formatTimeNow:(id)arg1;
- (void)checkAlbum:(id)arg1;
- (void)checkSongInfoMid;
- (BOOL)setTempDataImage:(id)arg1 songId:(id)arg2;
- (BOOL)addOfflineRecog:(int)arg1;
- (BOOL)addResult:(id)arg1;
- (BOOL)addSongInfo:(id)arg1 isRecv:(BOOL)arg2;
- (BOOL)addSongAndUserInfo:(id)arg1 isRecv:(BOOL)arg2;
- (id)getPageDataFromOfflineId:(id)arg1;
- (id)getPageDataFromSongID:(id)arg1;
- (id)getPageDataFromCodeID:(id)arg1;
- (void)setSongInfo:(id)arg1 SongId:(id)arg2;
- (id)getSongInfo:(id)arg1;
- (void)saveSongInfo;
- (void)savePageData;
- (void)removePagesAtIndexSet:(id)arg1;
- (id)getDuplicateSongsWithOffset:(int)arg1;
- (id)getDuplicateSongs;
- (void)addPageDataNowAtIndex:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (int)count;
- (id)getHistoryFilename;
- (void)dealloc;
- (id)initWithCallback:(id)arg1 withMode:(int)arg2;

@end

