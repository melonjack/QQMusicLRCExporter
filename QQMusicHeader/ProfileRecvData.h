//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChannelCreator, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ProfileRecvData : NSObject
{
    int _code;
    NSString *_msg;
    int _orderType;
    int _sin;
    int _ein;
    ChannelCreator *_creator;
    NSMutableArray *_list;
    int *_favSongNum;
    int *_favAlbumNum;
    int *_favSongListNum;
    int _selfdirnum;
    long long _ownerUin;
    long long _visitUin;
}

+ (id)translateFromJsonData:(id)arg1;
+ (id)translateCDList:(id)arg1;
+ (id)translateAlbumList:(id)arg1;
+ (BOOL)isShow:(id)arg1;
+ (id)translateToChannelItem:(id)arg1;
+ (id)translateToChannleCreator:(id)arg1;
@property(nonatomic) int selfdirnum; // @synthesize selfdirnum=_selfdirnum;
@property(nonatomic) int *favSongListNum; // @synthesize favSongListNum=_favSongListNum;
@property(nonatomic) int *favAlbumNum; // @synthesize favAlbumNum=_favAlbumNum;
@property(nonatomic) int *favSongNum; // @synthesize favSongNum=_favSongNum;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) ChannelCreator *creator; // @synthesize creator=_creator;
@property(nonatomic) int ein; // @synthesize ein=_ein;
@property(nonatomic) int sin; // @synthesize sin=_sin;
@property(nonatomic) long long visitUin; // @synthesize visitUin=_visitUin;
@property(nonatomic) long long ownerUin; // @synthesize ownerUin=_ownerUin;
@property(nonatomic) int orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int code; // @synthesize code=_code;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)dealloc;

@end

