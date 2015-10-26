//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class ChannelItemKey, NSDictionary, NSString, TopicChannelListItem;

__attribute__((visibility("hidden")))
@interface TopicChannelProtocol : ProtocolBaseJason
{
    BOOL _loadMoreData;
    NSString *_dataUrl;
    TopicChannelListItem *_topicChannelListItem;
    NSDictionary *_rawJsonData;
    ChannelItemKey *_channelItemKey;
    int _totalCount;
}

@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, nonatomic) ChannelItemKey *channelItemKey; // @synthesize channelItemKey=_channelItemKey;
@property(nonatomic) BOOL loadMoreData; // @synthesize loadMoreData=_loadMoreData;
@property(retain, nonatomic) NSDictionary *rawJsonData; // @synthesize rawJsonData=_rawJsonData;
@property(retain, nonatomic) TopicChannelListItem *topicChannelListItem; // @synthesize topicChannelListItem=_topicChannelListItem;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
- (void).cxx_destruct;
- (BOOL)hasNextPage;
- (void)onParseJasonData:(id)arg1;
- (id)getUrl;
- (void)getCidAndCgiName;
- (id)initWithChannelItemKey:(id)arg1;

@end
