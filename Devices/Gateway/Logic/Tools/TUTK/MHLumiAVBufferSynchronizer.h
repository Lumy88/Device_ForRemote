//
//  MHLumiAVBufferSynchronizer.h
//  MiHome
//
//  Created by LM21Mac002 on 2016/11/17.
//  Copyright © 2016年 小米移动软件. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MHLumiAVBufferSynchronizer : NSObject
@property (nonatomic, assign, readonly) BOOL isReady;
@property (nonatomic, assign) NSTimeInterval videoFrameInterval;
@property (nonatomic, assign) NSTimeInterval audioFrameInterval;
@property (nonatomic, assign) NSUInteger videoFrameCount;
@property (nonatomic, assign) NSUInteger audioFrameCount;

- (void)addAudioAACBuffer:(NSData *)aacData;
- (void)addVideoH264Buffer:(NSData *)h264Data;

- (NSData *)fetchAudioAACBuffer;
- (NSData *)fetchVideoH264Buffer;
@end
