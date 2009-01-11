/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ACTIVEMQ_COMMANDS_MESSAGEPULL_H_
#define _ACTIVEMQ_COMMANDS_MESSAGEPULL_H_

// Turn off warning message for ignored exception specification
#ifdef _MSC_VER
#pragma warning( disable : 4290 )
#endif

#include <activemq/util/Config.h>
#include <activemq/commands/BaseCommand.h>
#include <activemq/commands/ConsumerId.h>
#include <activemq/commands/ActiveMQDestination.h>
#include <activemq/commands/MessageId.h>
#include <vector>
#include <string>

namespace activemq{
namespace commands{

    /*
     *
     *  Command and marshaling code for OpenWire format for MessagePull
     *
     *
     *  NOTE!: This file is autogenerated - do not modify!
     *         if you need to make a change, please see the Java Classes
     *         in the activemq-openwire-generator module
     *
     */
    class AMQCPP_API MessagePull : public BaseCommand<transport::Command>
    {
    protected:

        ConsumerId* consumerId;
        ActiveMQDestination* destination;
        long long timeout;
        std::string correlationId;
        MessageId* messageId;

    public:

        const static unsigned char ID_MESSAGEPULL = 20;

    public:

        MessagePull();
        virtual ~MessagePull();

        /**
         * Get the unique identifier that this object and its own
         * Marshaller share.
         * @returns new DataStructure type copy.
         */
        virtual unsigned char getDataStructureType() const;

        /**
         * Clone this object and return a new instance that the
         * caller now owns, this will be an exact copy of this one
         * @returns new copy of this object.
         */
        virtual MessagePull* cloneDataStructure() const;

        /**
         * Copy the contents of the passed object into this object's
         * members, overwriting any existing data.
         * @param src - Source Object
         */
        virtual void copyDataStructure( const DataStructure* src );

        /**
         * Returns a string containing the information for this DataStructure
         * such as its type and value of its elements.
         * @return formatted string useful for debugging.
         */
        virtual std::string toString() const;

        /**
         * Compares the DataStructure passed in to this one, and returns if
         * they are equivalent.  Equivalent here means that they are of the
         * same type, and that each element of the objects are the same.
         * @returns true if DataStructure's are Equal.
         */
        virtual bool equals( const DataStructure* value ) const;

        virtual const ConsumerId* getConsumerId() const;
        virtual ConsumerId* getConsumerId();
        virtual void setConsumerId( ConsumerId* consumerId );

        virtual const ActiveMQDestination* getDestination() const;
        virtual ActiveMQDestination* getDestination();
        virtual void setDestination( ActiveMQDestination* destination );

        virtual long long getTimeout() const;
        virtual void setTimeout( long long timeout );

        virtual const std::string& getCorrelationId() const;
        virtual std::string& getCorrelationId();
        virtual void setCorrelationId( const std::string& correlationId );

        virtual const MessageId* getMessageId() const;
        virtual MessageId* getMessageId();
        virtual void setMessageId( MessageId* messageId );

    };

}}

#endif /*_ACTIVEMQ_COMMANDS_MESSAGEPULL_H_*/

