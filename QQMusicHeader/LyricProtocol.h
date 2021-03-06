//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBase.h"

@class NSString, SongInfo;

__attribute__((visibility("hidden")))
@interface LyricProtocol : ProtocolBase
{
    SongInfo *song;
    NSString *lyricText;
    NSString *transLateLyricText;
    NSString *yinyiLyricText;
    BOOL useID3ToSearchForQQSong;
    BOOL isResearchAction;
    int transType;
    unsigned long lrcTimeTag;
    unsigned long qrcTimeTag;
    unsigned long trcTimeTag;
    unsigned long romaTimeTag;
    int _lyricType;
}

@property(nonatomic) int lyricType; // @synthesize lyricType=_lyricType;
@property(nonatomic) unsigned long romaTimeTag; // @synthesize romaTimeTag;
@property(nonatomic) unsigned long trcTimeTag; // @synthesize trcTimeTag;
@property(nonatomic) unsigned long qrcTimeTag; // @synthesize qrcTimeTag;
@property(nonatomic) unsigned long lrcTimeTag; // @synthesize lrcTimeTag;
@property(nonatomic) int transType; // @synthesize transType;
@property(nonatomic) BOOL isResearchAction; // @synthesize isResearchAction;
@property(nonatomic) BOOL useID3ToSearchForQQSong; // @synthesize useID3ToSearchForQQSong;
@property(retain, nonatomic) SongInfo *song; // @synthesize song;
@property(retain, nonatomic) NSString *yinyiLyricText; // @synthesize yinyiLyricText;
@property(retain, nonatomic) NSString *transLateLyricText; // @synthesize transLateLyricText;
@property(retain, nonatomic) NSString *lyricText; // @synthesize lyricText;
- (void).cxx_destruct;
- (id)preventTrashyLyric:(id)arg1;
- (id)stringByRemovingInvalidChars:(id)arg1;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (BOOL)canReportError;
- (id)getUrl;
- (id)init;

@end

