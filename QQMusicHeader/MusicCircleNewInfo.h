//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMNewInfo.h"

__attribute__((visibility("hidden")))
@interface MusicCircleNewInfo : QMNewInfo
{
    int _count;
    int _zanNum;
    int _feedNum;
}

+ (id)translateFromMusicNewInfoJsonData:(id)arg1;
+ (id)translateFromJsonData:(id)arg1;
@property(nonatomic) int feedNum; // @synthesize feedNum=_feedNum;
@property(nonatomic) int zanNum; // @synthesize zanNum=_zanNum;
@property(nonatomic) int count; // @synthesize count=_count;
- (id)strZanNum;
- (BOOL)hasPic;
- (BOOL)hasPoint;
- (BOOL)hasUserAction;

@end

