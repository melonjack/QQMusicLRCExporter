//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface CacheConfig : NSObject <NSCopying>
{
    NSDate *_lastDateDeleteFile;
}

@property(retain, nonatomic) NSDate *lastDateDeleteFile; // @synthesize lastDateDeleteFile=_lastDateDeleteFile;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

