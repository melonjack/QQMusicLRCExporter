//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBase.h"

__attribute__((visibility("hidden")))
@interface PushNotificationProtocol : ProtocolBase
{
    BOOL _bind;
}

+ (void)bindDeviceToken:(BOOL)arg1;
+ (void)updateDeviceToken:(id)arg1;
+ (id)toHexTokenString:(id)arg1;
@property BOOL bind; // @synthesize bind=_bind;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)init;

@end

