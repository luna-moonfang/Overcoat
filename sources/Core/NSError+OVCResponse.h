// NSError+OVCResponse.h
//
// Copyright (c) 2013-2016 Overcoat Team
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <Overcoat/OVCUtilities.h>

NS_ASSUME_NONNULL_BEGIN

@class OVCResponse;

extern NSString * const OVCResponseKey;

// 把response信息加入NSError, OVCResponse是MTLModel的子类, 保存repsonse相关的内容
@interface NSError (OVCResponse)

- (instancetype)ovc_errorWithUnderlyingResponse:(OVC_NULLABLE OVCResponse *)response;

@property (nonatomic, readonly, OVC_NULLABLE) OVCResponse *ovc_response;

@end

NS_ASSUME_NONNULL_END
