//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

__attribute__((visibility("hidden")))
@interface ProfileLockProtocol : ProtocolBaseJason
{
    int _lockFlag;
}

@property(nonatomic) int lockFlag; // @synthesize lockFlag=_lockFlag;
- (id)getUrl;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)init;

@end
