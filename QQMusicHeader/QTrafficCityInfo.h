//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QTrafficCityInfo : NSObject
{
    CDStruct_2c43369c _leftTop;
    CDStruct_2c43369c _rightBottom;
    NSString *_name;
    int _minScaleLevel;
}

@property(nonatomic) int minScaleLevel; // @synthesize minScaleLevel=_minScaleLevel;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) CDStruct_c3b9c2ee rightBottom; // @synthesize rightBottom=_rightBottom;
@property(nonatomic) CDStruct_c3b9c2ee leftTop; // @synthesize leftTop=_leftTop;
- (BOOL)isSupportTraffic:(CDStruct_c3b9c2ee)arg1 scaleLevel:(int)arg2;
- (void)dealloc;
- (id)init;

@end
