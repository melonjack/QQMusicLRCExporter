//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelHomeProtocol.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NewChannelHomeProtocol : ChannelHomeProtocol
{
    NSMutableArray *_mainChannels;
    NSMutableArray *_groups;
}

@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSMutableArray *mainChannels; // @synthesize mainChannels=_mainChannels;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (id)channelHomeData;

@end
