//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSDictionary, SubscribeListItem;

__attribute__((visibility("hidden")))
@interface SubscribedChannelsUpdateProtocol : ProtocolBaseJason
{
    SubscribeListItem *_updatingSubscribeListItem;
    NSDictionary *_rawJsonData;
}

@property(retain, nonatomic) NSDictionary *rawJsonData; // @synthesize rawJsonData=_rawJsonData;
@property(retain, nonatomic) SubscribeListItem *updatingSubscribeListItem; // @synthesize updatingSubscribeListItem=_updatingSubscribeListItem;
- (void).cxx_destruct;
- (void)_putJsonInfo:(id)arg1 intoChannelItem:(id)arg2;
- (BOOL)_jsonInfo:(id)arg1 isMatchWithChannelItem:(id)arg2;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (BOOL)canReportError;
- (id)getUrl;
- (id)init;
- (int)cid;

@end

