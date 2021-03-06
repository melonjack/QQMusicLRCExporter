//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QLHotspotItem : NSObject <NSCoding>
{
    unsigned int _itemType;
    int _itemHotLevel;
    NSString *_itemAccountID;
    NSString *_itemAccountName;
    NSString *_itemIconURL;
    NSString *_itemLevelMessage;
    NSString *_itemMessage1;
    NSString *_itemMessage2;
}

@property(copy, nonatomic) NSString *itemMessage2; // @synthesize itemMessage2=_itemMessage2;
@property(copy, nonatomic) NSString *itemMessage1; // @synthesize itemMessage1=_itemMessage1;
@property(copy, nonatomic) NSString *itemLevelMessage; // @synthesize itemLevelMessage=_itemLevelMessage;
@property(copy, nonatomic) NSString *itemIconURL; // @synthesize itemIconURL=_itemIconURL;
@property(copy, nonatomic) NSString *itemAccountName; // @synthesize itemAccountName=_itemAccountName;
@property(copy, nonatomic) NSString *itemAccountID; // @synthesize itemAccountID=_itemAccountID;
@property(nonatomic) int itemHotLevel; // @synthesize itemHotLevel=_itemHotLevel;
@property(nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

