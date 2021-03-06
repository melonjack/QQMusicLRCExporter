//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelItem.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SongListItem : ChannelItem
{
    NSString *_language;
    NSString *_date;
    NSString *_introduction;
    NSString *_introurl;
    NSString *_nexturl;
    NSString *_orderTitle;
    NSString *_orderJumpUrl;
    unsigned long _timeTag;
    int _shareNum;
    NSArray *_orderList;
    int _orderNum;
    NSArray *_tagList;
    NSString *_uniqueKey;
    int _isAd;
    NSString *_adTitle;
    NSString *_adUrl;
    NSString *_formattedIntroStr;
    NSArray *_songlistArrayForAlbum;
    int _commentNum;
}

+ (id)translateToSongListItem:(id)arg1;
+ (id)getLocalSongListItemFromFolderInfo:(id)arg1;
@property(nonatomic) int commentNum; // @synthesize commentNum=_commentNum;
@property(retain, nonatomic) NSArray *songlistArrayForAlbum; // @synthesize songlistArrayForAlbum=_songlistArrayForAlbum;
@property(retain, nonatomic) NSString *formattedIntroStr; // @synthesize formattedIntroStr=_formattedIntroStr;
@property(retain, nonatomic) NSString *adUrl; // @synthesize adUrl=_adUrl;
@property(retain, nonatomic) NSString *adTitle; // @synthesize adTitle=_adTitle;
@property(nonatomic) int isAd; // @synthesize isAd=_isAd;
@property(retain, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) int orderNum; // @synthesize orderNum=_orderNum;
@property(retain, nonatomic) NSArray *orderList; // @synthesize orderList=_orderList;
@property(nonatomic) int shareNum; // @synthesize shareNum=_shareNum;
@property(nonatomic) unsigned long timeTag; // @synthesize timeTag=_timeTag;
@property(retain, nonatomic) NSString *orderJumpUrl; // @synthesize orderJumpUrl=_orderJumpUrl;
@property(retain, nonatomic) NSString *orderTitle; // @synthesize orderTitle=_orderTitle;
@property(retain, nonatomic) NSString *nexturl; // @synthesize nexturl=_nexturl;
@property(retain, nonatomic) NSString *introurl; // @synthesize introurl=_introurl;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

