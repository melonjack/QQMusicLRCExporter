//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QOverlayPathView.h"

@class QCircle;

@interface QCircleView : QOverlayPathView
{
    QCircle *_circle;
    float _mapScale;
}

@property(readonly, nonatomic) QCircle *circle; // @synthesize circle=_circle;
- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(float)arg2 inContext:(struct CGContext *)arg3;
- (BOOL)canDrawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(float)arg2;
- (void)createPath;
- (void)dealloc;
- (id)initWithCircle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

