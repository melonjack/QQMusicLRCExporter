//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface QRouteInfoForBus : NSObject
{
    int _time;
    int _distance;
    int _type;
    NSArray *_routeSegmentList;
    CDStruct_c3b9c2ee *_routeNodeList;
    unsigned int _routeNodeCount;
}

@property(readonly, nonatomic) unsigned int routeNodeCount; // @synthesize routeNodeCount=_routeNodeCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *routeNodeList; // @synthesize routeNodeList=_routeNodeList;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int time; // @synthesize time=_time;
@property(retain, nonatomic) NSArray *routeSegmentList; // @synthesize routeSegmentList=_routeSegmentList;
@property(nonatomic) int distance; // @synthesize distance=_distance;
- (void)setRouteNodeList:(CDStruct_c3b9c2ee *)arg1 withRouteNodeCount:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end
