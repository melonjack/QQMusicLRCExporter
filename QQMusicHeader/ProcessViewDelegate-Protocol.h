//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ProcessView;

@protocol ProcessViewDelegate <NSObject>
- (struct CGSize)imageSizeForProcessView:(ProcessView *)arg1 position:(int)arg2;
- (NSString *)imageNameForProcessView:(ProcessView *)arg1 position:(int)arg2;
@end

