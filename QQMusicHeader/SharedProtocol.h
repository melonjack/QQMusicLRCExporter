//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolAuthBase.h"

@class NSString, ShareInfo, SongInfo;

__attribute__((visibility("hidden")))
@interface SharedProtocol : ProtocolAuthBase
{
    NSString *text;
    SongInfo *song;
    _Bool bAlsoSharedToWeiBo;
    _Bool bAlsoSharedToQZone;
    BOOL isShareSong;
    ShareInfo *shareInfo;
    NSString *dest;
    int m_iRetStateqQone;
    int m_iRetStateqTXWeibo;
    NSString *retMsg;
}

@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg;
@property(nonatomic) int m_iRetStateqTXWeibo; // @synthesize m_iRetStateqTXWeibo;
@property(nonatomic) int m_iRetStateqQone; // @synthesize m_iRetStateqQone;
@property(retain, nonatomic) NSString *dest; // @synthesize dest;
@property(nonatomic) BOOL isShareSong; // @synthesize isShareSong;
@property(nonatomic) _Bool bAlsoSharedToQZone; // @synthesize bAlsoSharedToQZone;
@property(nonatomic) _Bool bAlsoSharedToWeiBo; // @synthesize bAlsoSharedToWeiBo;
@property(nonatomic) __weak ShareInfo *shareInfo; // @synthesize shareInfo;
@property(retain, nonatomic) SongInfo *song; // @synthesize song;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)init;

@end

