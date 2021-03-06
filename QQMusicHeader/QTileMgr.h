//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QTileDownLoadDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer, QFileMgr, QMapDataMgr;

@interface QTileMgr : NSObject <QTileDownLoadDelegate>
{
    unsigned int _tileType;
    unsigned int _tileSize;
    int _tilePackSize;
    int _tileCacheMaxNum;
    NSString *_tileDownLoadUrl;
    NSString *_tileDownloadPath;
    NSMutableArray *_tileCache;
    NSMutableDictionary *_tileToDownLoadList;
    NSMutableDictionary *_tileDownLoadingList;
    NSOperationQueue *_tileDownloadQueue;
    QFileMgr *_fileMgr;
    NSTimer *_timer;
    BOOL _ischeckTileOutTime;
    QMapDataMgr *_mapDataMgr;
}

@property(nonatomic) BOOL ischeckTileOutTime; // @synthesize ischeckTileOutTime=_ischeckTileOutTime;
@property(nonatomic) QMapDataMgr *mapDataMgr; // @synthesize mapDataMgr=_mapDataMgr;
@property(retain, nonatomic) NSString *tileDownloadPath; // @synthesize tileDownloadPath=_tileDownloadPath;
@property(retain, nonatomic) NSString *tileDownLoadUrl; // @synthesize tileDownLoadUrl=_tileDownLoadUrl;
- (void)drawTile:(struct CGContext *)arg1 tileRect:(struct CGRect)arg2 scale:(float)arg3;
- (void)clearMemoryCache;
- (void)setTileInfo:(unsigned int)arg1 tileSize:(unsigned int)arg2 tilePackSize:(int)arg3 tileCacheMaxNum:(int)arg4 tileDownloadUrl:(id)arg5 tileDownloadPath:(id)arg6;
- (id)getTileFromCache:(id)arg1;
- (id)makeTileImageName:(struct CGPoint)arg1 scaleLevel:(int)arg2;
- (id)makeTileName:(struct CGPoint)arg1 scaleLevel:(int)arg2;
- (void)updateTileState;
- (void)NotifyTileDownLoadState:(unsigned int)arg1 tile:(id)arg2;
- (void)dealloc;
- (id)init;

@end

