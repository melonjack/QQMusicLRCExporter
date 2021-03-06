//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicListCategory : NSObject <NSCoding>
{
    NSString *_name;
    int _categoryId;
    int _numberOfMusicList;
    NSArray *_sorts;
    int _selectedSortIndex;
    int _type;
    int _optionTypeId;
    int _optionItemId;
}

+ (id)castToCategoryObjectByJsonData:(id)arg1;
@property(nonatomic) int optionItemId; // @synthesize optionItemId=_optionItemId;
@property(nonatomic) int optionTypeId; // @synthesize optionTypeId=_optionTypeId;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int selectedSortIndex; // @synthesize selectedSortIndex=_selectedSortIndex;
@property(retain, nonatomic) NSArray *sorts; // @synthesize sorts=_sorts;
@property(nonatomic) int numberOfMusicList; // @synthesize numberOfMusicList=_numberOfMusicList;
@property(nonatomic) int categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqualContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)init;

@end

