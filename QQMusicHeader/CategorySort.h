//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CategorySort : NSObject <NSCoding>
{
    int _sortId;
    NSString *_sortName;
}

+ (id)castToCategorySortObjectByJsonData:(id)arg1;
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
@property(nonatomic) int sortId; // @synthesize sortId=_sortId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

