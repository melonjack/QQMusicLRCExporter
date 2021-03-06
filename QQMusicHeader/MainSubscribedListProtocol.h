//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MainSubscribedListProtocol : ProtocolBaseJason
{
    NSMutableArray *_focusChannelItems;
    NSMutableArray *_channelTypeItems;
}

@property(retain, nonatomic) NSMutableArray *channelTypeItems; // @synthesize channelTypeItems=_channelTypeItems;
@property(retain, nonatomic) NSMutableArray *focusChannelItems; // @synthesize focusChannelItems=_focusChannelItems;
- (void).cxx_destruct;
- (id)translateToChannelItem:(id)arg1;
- (id)_translateToChannelTypeItem:(id)arg1;
- (void)onParseJasonData:(id)arg1;
- (BOOL)canReportError;
- (int)cid;
- (id)getUrl;
- (id)init;

@end

