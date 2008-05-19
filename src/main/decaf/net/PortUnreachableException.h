/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _DECAF_NET_PORTUNREACHABLEEXCEPTION_H_
#define _DECAF_NET_PORTUNREACHABLEEXCEPTION_H_

#include <decaf/util/Config.h>
#include <decaf/net/SocketException.h>

namespace decaf{
namespace net{

    class DECAF_API PortUnreachableException : public SocketException {
    public:

        /**
         * Default Constructor
         */
        PortUnreachableException() throw() {}

        /**
         * Conversion Constructor from some other Exception
         * @param An exception that should become this type of Exception
         */
        PortUnreachableException( const Exception& ex ) throw()
        : SocketException()
        {
            *(Exception*)this = ex;
        }

        /**
         * Copy Constructor
         */
        PortUnreachableException( const PortUnreachableException& ex ) throw()
        : SocketException()
        {
            *(Exception*)this = ex;
        }

        /**
         * Constructor - Initializes the file name and line number where
         * this message occured.  Sets the message to report, using an
         * optional list of arguments to parse into the message
         * @param file name where exception occurs
         * @param line number where the exception occurred.
         * @param message to report
         * @param list of primitives that are formatted into the message
         */
        PortUnreachableException( const char* file, const int lineNumber,
                            const char* msg, ... ) throw ()
        : SocketException()
        {
            va_list vargs ;
            va_start( vargs, msg );
            buildMessage( msg, vargs );

            // Set the first mark for this exception.
            setMark( file, lineNumber );
        }

        /**
         * Clones this exception.  This is useful for cases where you need
         * to preserve the type of the original exception as well as the message.
         * All subclasses should override.
         */
        virtual PortUnreachableException* clone() const {
            return new PortUnreachableException( *this );
        }

        /**
         * Destructor
         */
        virtual ~PortUnreachableException() throw() {}

    };

}}

#endif /*_DECAF_NET_PORTUNREACHABLEEXCEPTION_H_*/