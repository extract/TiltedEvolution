#pragma once

#include <Actor.h>

struct World;
struct ImguiService;
struct UpdateEvent;

struct TransportService;
struct BSAnimationGraphManager;

struct TestService
{
    TestService(entt::dispatcher& aDispatcher, World& aWorld, TransportService& aTransport, ImguiService& aImguiService);
    ~TestService() noexcept = default;

    TP_NOCOPYMOVE(TestService);

    void OnUpdate(const UpdateEvent&) noexcept;

protected:

    void OnDraw() noexcept;

private:

    void PlaceActorInWorld() noexcept;

    void DrawComponentDebugView();
    void DrawPlayerDebugView();
    void DrawAnimDebugView();
    void DrawContainerDebugView();
    void DrawFormDebugView();
    void DrawSkillView();

    uint64_t DisplayGraphDescriptorKey(BSAnimationGraphManager* pManager) noexcept;

    entt::dispatcher& m_dispatcher;
    TransportService& m_transport;
    World& m_world;

    Vector<GamePtr<Actor>> m_actors;

    uint32_t m_formId = 0;

    entt::scoped_connection m_updateConnection;
    entt::scoped_connection m_drawImGuiConnection;
    bool m_showDebugBar = false;
    bool m_showBuildTag = true;
    bool m_toggleComponentWindow = false;
    bool m_drawComponentsInWorldSpace = true;
};
