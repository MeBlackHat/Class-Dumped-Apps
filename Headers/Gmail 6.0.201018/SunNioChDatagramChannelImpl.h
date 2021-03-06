//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNioChannelsDatagramChannel.h"

#import "SunNioChSelChImpl-Protocol.h"

@class DalvikSystemCloseGuard, JavaIoFileDescriptor, JavaNetDatagramSocket, JavaNetInetAddress, JavaNetInetSocketAddress, JavaNetSocketAddress, NSString, SunNioChMembershipRegistry;
@protocol JavaNetProtocolFamily;

@interface SunNioChDatagramChannelImpl : JavaNioChannelsDatagramChannel <SunNioChSelChImpl>
{
    JavaIoFileDescriptor *fd_;
    int fdVal_;
    id <JavaNetProtocolFamily> family_;
    // Error parsing type: Aq, name: readerThread_
    // Error parsing type: Aq, name: writerThread_
    JavaNetInetAddress *cachedSenderInetAddress_;
    int cachedSenderPort_;
    id readLock_;
    id writeLock_;
    id stateLock_;
    int state_;
    JavaNetInetSocketAddress *localAddress_;
    JavaNetInetSocketAddress *remoteAddress_;
    JavaNetDatagramSocket *socket_;
    SunNioChMembershipRegistry *registry_;
    _Bool reuseAddressEmulated_;
    _Bool isReuseAddress_;
    DalvikSystemCloseGuard *guard_;
    JavaNetSocketAddress *sender_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)disconnect0WithJavaIoFileDescriptor:(id)arg1 withBoolean:(_Bool)arg2;
+ (void)initIDs;
- (void)dealloc;
- (int)send0WithBoolean:(_Bool)arg1 withJavaIoFileDescriptor:(id)arg2 withLong:(long long)arg3 withInt:(int)arg4 withJavaNetInetAddress:(id)arg5 withInt:(int)arg6;
- (int)receive0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (int)getFDVal;
- (id)getFD;
- (void)translateAndSetInterestOpsWithInt:(int)arg1 withSunNioChSelectionKeyImpl:(id)arg2;
- (int)pollWithInt:(int)arg1 withLong:(long long)arg2;
- (_Bool)translateAndSetReadyOpsWithInt:(int)arg1 withSunNioChSelectionKeyImpl:(id)arg2;
- (_Bool)translateAndUpdateReadyOpsWithInt:(int)arg1 withSunNioChSelectionKeyImpl:(id)arg2;
- (_Bool)translateReadyOpsWithInt:(int)arg1 withInt:(int)arg2 withSunNioChSelectionKeyImpl:(id)arg3;
- (void)java_finalize;
- (void)kill;
- (void)implCloseSelectableChannel;
- (void)unblockWithSunNioChMembershipKeyImpl:(id)arg1 withJavaNetInetAddress:(id)arg2;
- (void)blockWithSunNioChMembershipKeyImpl:(id)arg1 withJavaNetInetAddress:(id)arg2;
- (void)dropWithSunNioChMembershipKeyImpl:(id)arg1;
- (id)joinWithJavaNetInetAddress:(id)arg1 withJavaNetNetworkInterface:(id)arg2 withJavaNetInetAddress:(id)arg3;
- (id)joinWithJavaNetInetAddress:(id)arg1 withJavaNetNetworkInterface:(id)arg2;
- (id)innerJoinWithJavaNetInetAddress:(id)arg1 withJavaNetNetworkInterface:(id)arg2 withJavaNetInetAddress:(id)arg3;
- (id)disconnect;
- (id)connectWithJavaNetSocketAddress:(id)arg1;
- (void)ensureOpenAndUnconnected;
- (_Bool)isConnected;
- (id)bindWithJavaNetSocketAddress:(id)arg1;
- (id)remoteAddress;
- (id)localAddress;
- (void)implConfigureBlockingWithBoolean:(_Bool)arg1;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)writeWithJavaNioByteBuffer:(id)arg1;
- (long long)readWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readWithJavaNioByteBuffer:(id)arg1;
- (int)sendFromNativeBufferWithJavaIoFileDescriptor:(id)arg1 withJavaNioByteBuffer:(id)arg2 withJavaNetInetSocketAddress:(id)arg3;
- (int)sendWithJavaIoFileDescriptor:(id)arg1 withJavaNioByteBuffer:(id)arg2 withJavaNetInetSocketAddress:(id)arg3;
- (int)sendWithJavaNioByteBuffer:(id)arg1 withJavaNetSocketAddress:(id)arg2;
- (int)receiveIntoNativeBufferWithJavaIoFileDescriptor:(id)arg1 withJavaNioByteBuffer:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (int)receiveWithJavaIoFileDescriptor:(id)arg1 withJavaNioByteBuffer:(id)arg2;
- (id)receiveWithJavaNioByteBuffer:(id)arg1;
- (void)ensureOpen;
- (id)supportedOptions;
- (id)getOptionWithJavaNetSocketOption:(id)arg1;
- (id)setOptionWithJavaNetSocketOption:(id)arg1 withId:(id)arg2;
- (id)getRemoteAddress;
- (id)getLocalAddress;
- (id)socket;
- (id)initPackagePrivateWithJavaNioChannelsSpiSelectorProvider:(id)arg1 withJavaIoFileDescriptor:(id)arg2;
- (id)initPackagePrivateWithJavaNioChannelsSpiSelectorProvider:(id)arg1 withJavaNetProtocolFamily:(id)arg2;
- (id)initPackagePrivateWithJavaNioChannelsSpiSelectorProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

