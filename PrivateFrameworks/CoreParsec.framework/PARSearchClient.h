/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSearchClient : NSObject <NSXPCConnectionDelegate> {
    PARSessionConfiguration * _config;
    bool  _configured;
    NSXPCConnection * _connection;
    PARPromise * _endpointPromise;
    NSObject<OS_dispatch_queue> * _idQueue;
    long long  _idState;
    NSString * _lastQuery;
    long long  _opCounter;
    NSObject<OS_dispatch_queue> * _queue;
    <PARDaemonXPC> * _remoteObject;
}

@property (retain) PARSessionConfiguration *config;
@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned int hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) <PARDaemonXPC> *remoteObject;
@property (readonly) Class superclass;

+ (id)daemonConnection;

- (void).cxx_destruct;
- (void)_invalidateConnection;
- (long long)_queryIdForObject:(id)arg1;
- (void)bag:(id /* block */)arg1;
- (void)coalesceQueryId:(long long)arg1;
- (id)config;
- (void)configure;
- (id)connection;
- (void)dealloc;
- (id)endpoint;
- (void)feedback:(id /* block */)arg1;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;
- (void)listSessions:(id /* block */)arg1;
- (void)listenToFlusher:(id /* block */)arg1;
- (id)queue;
- (id)remoteObject;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)reportEvent:(id)arg1;
- (long long)request:(id)arg1 reply:(id /* block */)arg2;
- (void)setConfig:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteObject:(id)arg1;

@end
