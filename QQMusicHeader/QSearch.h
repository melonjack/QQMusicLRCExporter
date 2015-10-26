//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QSearchInternal;

@interface QSearch : NSObject
{
    QSearchInternal *_internal;
    id <QSearchDelegate> _delegate;
    int _pageCapacity;
}

@property(nonatomic) int pageCapacity; // @synthesize pageCapacity=_pageCapacity;
- (BOOL)smartTripSearch:(id)arg1 widthKeyWord:(id)arg2;
- (BOOL)busLineSearch:(id)arg1;
- (BOOL)drivingSearchWithLocation:(id)arg1 start:(id)arg2 endCity:(id)arg3 end:(id)arg4 withDriveSearchType:(int)arg5;
- (BOOL)drivingSearch:(id)arg1 start:(id)arg2 endCity:(id)arg3 end:(id)arg4 withDriveSearchType:(int)arg5;
- (BOOL)busSearchWithLocation:(id)arg1 start:(id)arg2 end:(id)arg3 withBusSearchType:(int)arg4;
- (BOOL)busSearch:(id)arg1 start:(id)arg2 end:(id)arg3 withBusSearchType:(int)arg4;
- (BOOL)roundSearch:(id)arg1 location:(CDStruct_c3b9c2ee)arg2 inRadius:(int)arg3 withKey:(id)arg4 pageIndex:(int)arg5;
- (BOOL)poiSearchInbounds:(id)arg1 leftTop:(CDStruct_c3b9c2ee)arg2 rightBottom:(CDStruct_c3b9c2ee)arg3 pageIndex:(int)arg4;
- (BOOL)poiSearchInCity:(id)arg1 withKey:(id)arg2 pageIndex:(int)arg3;
- (id)getCityNameFromPos:(CDStruct_c3b9c2ee)arg1;
- (int)getPageCapacity;
@property(nonatomic) id <QSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

@end
