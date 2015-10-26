//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DissInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_name;
    NSString *_picUrl;
    long long dissId;
}

+ (id)translateDissromJson:(id)arg1;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long dissId; // @synthesize dissId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
