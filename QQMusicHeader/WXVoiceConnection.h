//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXNetDelegate.h"

@class NSData, NSString;

@interface WXVoiceConnection : NSObject <WXNetDelegate>
{
    id <WXVoiceConnectionDelegate> _delegate;
    struct WXVoiceEngine *_netConnection;
    int _connectionState;
    int _receiveErrorCode;
    int _receiveHttpStatus;
    char *_receiveCStr;
    int _receiveLength;
    NSData *_key;
    int _type;
}

+ (void)receiveType:(int)arg1 error:(int)arg2 httpStatus:(int)arg3 cStr:(char *)arg4 length:(int)arg5;
+ (void)deleteConnection:(id)arg1;
+ (id)newConnectWithDelegate:(id)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) id <WXVoiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (void)didRecvData:(id)arg1;
- (BOOL)shouldSendData:(id)arg1 toUrl:(id)arg2;
- (void)removeFromConnectionArray;
- (id)init;
- (void)receiveOnMainThread;
- (void)receiveError:(int)arg1 httpStatus:(int)arg2 cStr:(char *)arg3 length:(int)arg4;
- (void)disConnect;
- (void)cancel;
- (void)setHostName:(id)arg1;
- (void)setServer:(id)arg1 port:(int)arg2;
- (void)sendData:(id)arg1 toUrl:(id)arg2;
- (void)sendQueryArgs:(id)arg1 andData:(id)arg2 toUrl:(id)arg3;
- (void)sendToUrl:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
