//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDA4AConnectionDelegate.h"
#import "IDA4AConnectionMonitorDelegate.h"
#import "IDTcpConnectionDelegate.h"

@class IDA4AConnection, IDA4AConnectionMonitor, IDA4AProxyInfo, NSConditionLock, NSLock, NSMutableDictionary, NSNumber, NSString;

@interface IDConnectionMultiplexer : NSObject <IDTcpConnectionDelegate, IDA4AConnectionDelegate, IDA4AConnectionMonitorDelegate>
{
    struct __CFSocket *_listenerSocket;
    CDUnknownFunctionPointerType _socketAcceptCallback;
    id <IDConnectionMultiplexerDelegate> _delegate;
    NSNumber *_listeningPort;
    IDA4AProxyInfo *_proxyInfo;
    unsigned int _remoteProxyBufferSize;
    unsigned int _maxRemoteProxyBufferSize;
    NSLock *_tcpConnectionsLock;
    NSMutableDictionary *_tcpConnections;
    IDA4AConnection *_a4aConnection;
    NSConditionLock *_stateCondition;
    IDA4AConnectionMonitor *_connectionMonitor;
}

@property(retain) IDA4AConnectionMonitor *connectionMonitor; // @synthesize connectionMonitor=_connectionMonitor;
@property(retain) NSConditionLock *stateCondition; // @synthesize stateCondition=_stateCondition;
@property(retain) IDA4AConnection *a4aConnection; // @synthesize a4aConnection=_a4aConnection;
@property(readonly) NSMutableDictionary *tcpConnections; // @synthesize tcpConnections=_tcpConnections;
@property(retain) NSLock *tcpConnectionsLock; // @synthesize tcpConnectionsLock=_tcpConnectionsLock;
@property unsigned int maxRemoteProxyBufferSize; // @synthesize maxRemoteProxyBufferSize=_maxRemoteProxyBufferSize;
@property unsigned int remoteProxyBufferSize; // @synthesize remoteProxyBufferSize=_remoteProxyBufferSize;
@property(retain) IDA4AProxyInfo *proxyInfo; // @synthesize proxyInfo=_proxyInfo;
@property(retain) NSNumber *listeningPort; // @synthesize listeningPort=_listeningPort;
@property __weak id <IDConnectionMultiplexerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)socketAddressDataWithPort:(unsigned int)arg1;
- (void)closeListeningSocket;
- (void)monitor:(id)arg1 didEncounterError:(id)arg2;
- (void)monitor:(id)arg1 didCreatePacket:(id)arg2;
- (void)increaseRemoteProxyBufferSize:(unsigned int)arg1;
- (void)increaseRemoteProxyBufferSizeForPacket:(id)arg1;
- (void)increaseRemoteProxyBufferSizeForPacketAndResumeWriting:(id)arg1;
- (void)decreaseRemoteProxyBufferSize:(unsigned int)arg1;
- (void)decreaseRemoteProxyBufferSizeForPacket:(id)arg1;
- (void)connection:(id)arg1 didSendBytes:(unsigned int)arg2;
- (void)connection:(id)arg1 willSendBytes:(unsigned int)arg2;
- (void)connection:(id)arg1 errorOccured:(id)arg2;
- (void)connection:(id)arg1 didReceivePacket:(id)arg2;
- (void)connection:(id)arg1 errorEncountered:(id)arg2 withClosePacket:(id)arg3;
- (void)connection:(id)arg1 errorEncountered:(id)arg2;
- (void)connection:(id)arg1 didCreatePackage:(id)arg2;
- (struct __CFSocket *)createListenerSocket:(unsigned int)arg1;
- (void)stop;
- (BOOL)startWithInputStream:(id)arg1 outputStream:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

