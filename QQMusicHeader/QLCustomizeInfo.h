//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface QLCustomizeInfo : NSObject
{
    int videoType;
    NSNumber *count;
}

@property(retain, nonatomic) NSNumber *count; // @synthesize count;
@property(nonatomic) int videoType; // @synthesize videoType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 count:(unsigned int)arg2;

@end

