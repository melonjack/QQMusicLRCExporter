//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QMConnectionItemDelegate.h"
#import "QTileDrawDelegate.h"

@class NSString, NSTimer, QCityTrafficMgr, QMapViewInternal, QTileMgr, UIImage;

@interface QMapDataMgr : NSObject <QTileDrawDelegate, QMConnectionItemDelegate>
{
    unsigned int _mapType;
    QTileMgr *_mapTileMgr;
    QTileMgr *_trafficTileMgr;
    QTileMgr *_satelliteTileMgr;
    int _tileSize;
    UIImage *_tileBackGround;
    QCityTrafficMgr *_cityTrafficMgr;
    QMapViewInternal *_mapView;
    NSTimer *_timer;
}

@property(nonatomic) QMapViewInternal *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) unsigned int mapType; // @synthesize mapType=_mapType;
- (void)connectionItem:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionItemDidFinish:(id)arg1;
- (void)logUpload;
- (void)setIsStartLogUploadTimer:(BOOL)arg1;
- (void)updateMapView;
- (void)didReceiveMemoryWarning;
- (void)drawTile:(struct CGContext *)arg1 tileRect:(struct CGRect)arg2 scale:(float)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
