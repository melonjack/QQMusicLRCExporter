//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBase.h"

@class NSString, SongInfo;

__attribute__((visibility("hidden")))
@interface AlbumProtocol : ProtocolBase
{
    NSString *albumImageURL;
    NSString *singerImageURL;
    SongInfo *song;
}

@property(retain, nonatomic) SongInfo *song; // @synthesize song;
@property(retain, nonatomic) NSString *singerImageURL; // @synthesize singerImageURL;
@property(retain, nonatomic) NSString *albumImageURL; // @synthesize albumImageURL;
- (void).cxx_destruct;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)init;

@end

